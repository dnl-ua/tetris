#pragma once

enum Direction { Down, Left, Right };

struct Coordinates {
    int x;
    int y;
};

// NOTE: i know that tetris piece is called Tetromino, i just 
//       hate typing it out.
class Piece {
    private:
        Coordinates coords[4];
        Coordinates previous[4]; // for going back in case of invalid move
    public: 
        const int type; // 1 - O, 2 - I, 3 - Z, 4 - S, 5 - L, 6 - J, 7 - T
        bool dead;

        Piece( int u_type );

        void init( );

        inline int get_y( int i ) const { return coords[i].y; }
        inline int get_x( int i ) const { return coords[i].x; }
        inline int get_prev_y( int i ) const { return previous[i].y; }
        inline int get_prev_x( int i ) const { return previous[i].x; }

        void rotate( );
        void move( Direction u_direction );

        void revert( );
};

