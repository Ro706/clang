/*A teacher wants to calculate the average score for each student in their class. They have
recorded the scores for each student on three quizzes and want to store them in a
two-dimensional array.*/
#include<stdio.h>
int main(){
	int num_student;
	printf("Enter number of student:");
	scanf("%d",&num_student);
	float quiz_score[num_student][3],avg_score,total_score=0;
	for (int i=0;i<num_student;i++){
		for (int j=0;j<3;j++){
			printf("Enter a score of Quiz %d:",j+1);
			scanf("%f",&quiz_score[i][j]);
			total_score+=quiz_score[i][j];
		}
		avg_score = total_score/3;
		printf("average score for student %d : %.2f\n",i+1,avg_score);
	}
}
