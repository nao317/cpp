/* prog0814.c */

#include <stdio.h>
#include <string.h>
struct STUDENT {
	char name[256]; /* 学生名 */
	int  score;     /* 成績 */
};

struct SEISEKI {
	struct STUDENT max; /* 最高点の学生 */
	struct STUDENT min; /* 最低点の学生 */
	double avg;         /* 平均点 */
};

struct SEISEKI summarize( struct STUDENT *p )
{
	struct SEISEKI result;
    result.max.score = -1;
    result.min.score = 101;
    int sum = 0;
    int count = 0;
    while (p->score != -1) {
        sum = sum + p->score;
        count++;
        if (p->score > result.max.score) {
            result.max.score = p->score;
			strcpy(result.max.name, p->name);
        } else if (p->score <= result.min.score) {
			result.min.score = p->score;
			strcpy(result.min.name, p->name);
		}
		result.avg = (double)sum / count;
		p++;
    }

	return result;
}

void output(struct SEISEKI *s)
{
	printf( "最高点 = %d(%s)\n",  s->max.score, s->max.name);
	printf( "最低点 = %d(%s)\n",  s->min.score, s->min.name);
	printf( "平均点 = %5.2f\n",   s->avg );
}

int main( void )
{
	struct SEISEKI seiseki;
	struct STUDENT students[] = {
		{ "ASAKURA", 77 },
		{ "BUZEN", 85 },
		{ "CHIKUSHINO", 56 },
		{ "DEJIMA", 71 },
		{ "EDAKUNI", 48 },
		{ "FUKUTSU", 63 },
		{ "GANDA", 94 },
		{ "HIKINO", 37 },
		{ "IIZUKA", 52 },
		{ "JINNOHARU", 79 },
		{ "   ", -1 }
	};

	seiseki = summarize( students );

	output( &seiseki );
	return 0;
}
