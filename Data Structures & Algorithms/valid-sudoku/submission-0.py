class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Use a hash set to determine if there are duplicates
        # Use 3 hash sets, one for the row, one for the column, one for the 3x3
        # Use integer division to represent the 3x3 grid indices

        cols = collections.defaultdict(set)
        rows = collections.defaultdict(set)
        squares = collections.defaultdict(set)  # key = (r/3, c/3)

        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue
                if (
                    board[r][c] in rows[r]
                    or board[r][c] in cols[c]
                    or board[r][c] in squares[(r // 3, c // 3)]
                ):
                    return False
                cols[c].add(board[r][c])
                rows[r].add(board[r][c])
                squares[(r // 3, c // 3)].add(board[r][c])
        return True
