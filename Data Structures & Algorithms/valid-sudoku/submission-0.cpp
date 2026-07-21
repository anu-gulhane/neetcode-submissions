class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r=board.size(),c=board[0].size();
        //row duplicates check
        for(int i=0;i<r;i++){
            int arr[10]={0};
            for(int j=0;j<c;j++){
                if(board[i][j]!='.'){
                    arr[board[i][j]-'0']++;
                    if(arr[board[i][j]-'0']>1)return false;
                }
            }
        }

        //collumn duplicates
        for(int j=0;j<c;j++){
            int arr[10]={0};
            for(int i=0;i<r;i++){
                if(board[i][j]!='.'){arr[board[i][j]-'0']++;
                if(arr[board[i][j]-'0']>1)return false;}
            }
        }

        //subboxes duplicates
        for(int i=0;i<r;i+=3){
            for(int j=0;j<c;j+=3){
                int arr[10]={0};
                for(int ii=i;ii<i+3;ii++){
                    for(int jj=j;jj<j+3;jj++){
                        if(board[ii][jj]!='.'){arr[board[ii][jj]-'0']++;
                        if(arr[board[ii][jj]-'0']>1)return false;}
                    }
                }
            }  
        }

        return true;
    }
};
