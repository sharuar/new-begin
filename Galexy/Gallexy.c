#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 12

int N, M, W;

int visited[MAX];

int X[MAX];
int Y[MAX];
int u[MAX];
int v[MAX];
int cost[MAX];
int ans;

void set(){
	int i;
	for (i = 1; i <=M; i++){
		visited[i] = 0;
	}
}
void readCase(){
	scanf("%d%d%d", &N, &M, &W);
	set();
	int i; 
	for (i = 1; i <=M; i++){
		scanf("%d",&X[i]);
		scanf("%d",&Y[i]);
	}
	for (i = 1; i <=W; i++){
		scanf("%d", &u[i]);
		scanf("%d", &v[i]);
		scanf("%d", &cost[i]);
	}
}
int ABC(int a, int b){
	if (a > b)
		return a - b;
	else
		return b - a;
}
void solve(int r, int c, int dist){

	int distu, distv;

	if (N - r + N - c + dist < ans)
		ans = N - r + N - c + dist;

	if (ans < dist)
		return;


	int j;
	for (j = 1; j <=W; j++)if (!visited[j]){
		visited[j] = 1;
		distu = ABC(r, X[u[j]]) + ABC(c, Y[u[j]]);
		distv = ABC(r, X[v[j]]) + ABC(c, Y[v[j]]);
		if (distu < distv)
			solve(X[v[j]], Y[v[j]], dist + distu + cost[j]);
		else
			solve(X[u[j]], Y[u[j]], dist + distv + cost[j]);
		visited[j] = 0;
	}
}
void solveCase(){
	
	ans = (N * 2) - 2;
	
	solve(1,1,0);
	

}
void printCase(){
	printf("%d\n", ans);
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int T;
	scanf("%d", &T);
	int i;
	for (i = 0; i < T; i++){
		printf("#%d ", i + 1);
		readCase();
		solveCase();
		printCase();
	}
}