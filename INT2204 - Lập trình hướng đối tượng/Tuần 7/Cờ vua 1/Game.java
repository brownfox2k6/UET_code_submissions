import java.util.ArrayList;

public class Game {
  private Board board;
  private ArrayList<Move> moveHistory;

  public Game(Board board) {
    this.board = board;
    this.moveHistory = new ArrayList<>();
  }

  /**
   * javadoc.
   */
  public void movePiece(Piece piece, int destX, int destY) {
    if (!piece.canMove(board, destX, destY)) {
      return;
    }
    Move move = new Move(piece.getCoordinatesX(), destX, piece.getCoordinatesY(), destY, piece);
    Piece killed = board.getAt(destX, destY);
    if (killed != null) {
      move.setKilledPiece(killed);
      board.removeAt(destX, destY);
    }
    piece.setCoordinatesX(destX);
    piece.setCoordinatesY(destY);
    moveHistory.add(move);
  }

  public Board getBoard() {
    return board;
  }

  public void setBoard(Board board) {
    this.board = board;
  }

  public ArrayList<Move> getMoveHistory() {
    return moveHistory;
  }
}
