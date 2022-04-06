#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
        int x = A [ 0 ] ;
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( A [ i ] > x ) x = A [ i ] ;
        }
        return x ;
}

int min(int A[], int n)
{
        int x = A [ 0 ] ;
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( A [ i ] < x ) x = A [ i ] ;
        }
        return x ;
}

void copy(int A[], int n, int B[])
{
        for ( int i = 0 ; i < n ; i ++ ) {
            B [ i ] = A [ i ] ;
        }
        return ;
}

int find(int A[], int n, int x)
{
        int y = -1 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( A [ i ] == x ) {
                y = i ;
                break ;
            }
        }
        return y ;
}

int make_set(int A[], int n, int B[])
{
        for ( int i = 0 ; i < n ; i ++ ) {
            for ( int j = 0 ; j < n - i - 1 ; j ++ ) {
                if ( A [ j ] > A [ j + 1 ] ) {
                    int x = A [ j ] ;
                    A [ j ] = A [ j + 1 ] ;
                    A [ j + 1 ] = x ;
                }
            }
        }
        int x = 1 ;
        B [ 0 ] = A [ 0 ] ;
        for ( int i = 1 ; i < n ; i ++ ) {
            if ( A [ i ] != A [ i - 1 ] ) {
                B [ x ] = A [ i ] ;
                x ++ ;
            }
        }
        return x ;

}

int union_set(int A[], int n, int B[], int m)
{
        for ( int i = 0 ; i < m ; i ++ ) {
            int x = 0 ;
            for ( int j = 0 ; j < n ; j ++ ) {
                if ( A [ j ] == B [ i ] ) x = 1 ;
            }
            if ( x == 0 ) {
                A [ n ] = B [ i ] ;
                n ++ ;
            }
        }
        return n ;
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
        int x = 0 ;
        for ( int i = 0 ; i < m ; i ++ ) {
            for ( int j = 0 ; j < n ; j ++ ) {
                if ( B [ i ] == A [ j ] ) {
                    C [ x ] = B [ i ] ;
                    x ++ ;
                    break ;
                }
            }
        }
        return x ;

}

