#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Used to unit test each data structure created. Unit tests stored here so
that they can be run/modified easily. Just uncomment the test you want.
Include has to be re-written for each test (I mean isn't that the point)
*/

#include "courseNode.h"
#include "courseLinkedList.h"
#include "course.h"
#include "courseBST.h"
#include "department.h"
#include "degreeReq.h"
#include "degree.h"
#include "degreeArrayList.h"
#include "deptArrayList.h"
#include "studentBST.h"

/* CourseBST Unit Test
void main()
{
    printf("Test file running\n");
    CourseBST *bst = createCourseBST();
    Course *course1 = createCourse("Psych 110", "Intro to Psych");
    Course *course2 = createCourse("Psych 210", "Medium Psych");
    Course *course3 = createCourse("Psych 310", "Big Psych");
    Course *course4 = createCourse("Psych 200", "XMed Psych");
    insertCourseBST(bst, course1);
    insertCourseBST(bst, course2);
    insertCourseBST(bst, course3);
    insertCourseBST(bst, course4);
    removeCourseBST(bst, "Psych 200");
    printBST(bst);
    printBSTNode(searchCourseBST(bst, "Psych 200"));
}
*/

/*CourseLinkedList Unit Test
void main()
{
    printf("Test file running\n");
    CourseLinkedList *cll = createCourseLinkedList();
    insertCourseLinkedList(cll, "Psych 111");
    insertCourseLinkedList(cll, "Psych 211");
    insertCourseLinkedList(cll, "Psych 311");
    insertCourseLinkedList(cll, "Psych 411");
    CourseLinkedList *result = searchCourseLinkedList(cll, "Psych 111");
    CourseLinkedList *result1 = searchCourseLinkedList(cll, "Psych 112");
    cll = removeCourseLinkedList(cll, "Psych 411");
    if (result1 == NULL)
    {
        printf("NOT FOUND\n");
    }
    else
        printCourseLinkedList(result1);

    if (result == NULL)
    {
        printf("NOT FOUND\n");
    }
    else
        printCourseLinkedList(result);
}
*/

/*
//Unit tests for removing, adding and searching prereqs in a course
void main()
{
    Course *c = createCourse("Psych 320", "Advance to Psych");
    addCourseReq(c, "Psych 110");
    addCourseReq(c, "Psych 220");
    addCourseReq(c, "Psych 223");
    removePrereqInCourse(c, "Psych 220");
    printCourse(c);
    //printCourse(searchPrereqInCourse(c, "Psych 110"));
}
*/

//Department unitTest
/*
void main()
{
    Course *c1 = createCourse("Psych 320", "Advance to Psych");
    addCourseReq(c1, "Psych 110");
    addCourseReq(c1, "Psych 220");
    Course *c2 = createCourse("Psych 444", "Advance B to Psych");
    addCourseReq(c2, "Psych 333");
    addCourseReq(c2, "Psych 222");
    Course *c3 = createCourse("Psych 555", "Advance C to Psych");
    addCourseReq(c3, "Psych 444");
    addCourseReq(c3, "Psych 333");
    CourseBST *cbst = createCourseBST();
    insertCourseBST(cbst, c1);
    insertCourseBST(cbst, c2);
    insertCourseBST(cbst, c3);
    //printBST(cbst);
    Department *dept = createDept("Psychology");
    addCourseDept(dept, c1);
    addCourseDept(dept, c2);
    addCourseDept(dept, c3);
    //removeCourseDept(dept, "Psych 555");
    removePrereqDept(dept, "Psych 333");
    //printDept(dept);
    checkPreReq(dept, "Psych 222");
    //printDept(dept);
}
*/

/*
//DegreeReq unit tests
void main(void)
{
    CourseLinkedList *cll1 = createCourseLinkedList();
    Degree *d = createDeg("Psychology");
    DegreeReq *dr = createDegreeReq();
    insertCourseLinkedList(cll1, "Psych 110");
    insertCourseLinkedList(cll1, "Psych 112");
    insertCourseLinkedList(cll1, "Psych 113");
    CourseLinkedList *cll2 = createCourseLinkedList();
    insertCourseLinkedList(cll2, "Psych 210");
    insertCourseLinkedList(cll2, "Psych 212");
    insertCourseLinkedList(cll2, "Psych 213");
    CourseLinkedList *cll3 = createCourseLinkedList();
    insertCourseLinkedList(cll3, "Psych 555");
    insertDegreeReq(dr, cll1);
    insertDegreeReq(dr, cll2);
    insertDegreeReq(dr, cll3);
    //DegreeReqNode *dn = searchDegreeReq(dr, "Psych 666");
    removeDegreeReq(dr, "Psych 555");
    removeDegreeReq(dr, "Psych 212");
    removeDegreeReq(dr, "Psych 210");
    setDegReq(d, dr);
    printDeg(d);
}
*/

/*
//Test for dept and deg
void main()
{
    Course *c1 = createCourse("Psych 320", "Advance to Psych");
    addCourseReq(c1, "Psych 110");
    addCourseReq(c1, "Psych 220");
    Course *c2 = createCourse("Psych 444", "Advance B to Psych");
    addCourseReq(c2, "Psych 333");
    addCourseReq(c2, "Psych 222");
    Course *c3 = createCourse("Psych 555", "Advance C to Psych");
    addCourseReq(c3, "Psych 444");
    addCourseReq(c3, "Psych 333");
    CourseBST *cbst = createCourseBST();
    insertCourseBST(cbst, c1);
    insertCourseBST(cbst, c2);
    insertCourseBST(cbst, c3);
    //printBST(cbst);
    Department *dept = createDept("Psychology");
    addCourseDept(dept, c1);
    addCourseDept(dept, c2);
    addCourseDept(dept, c3);
    //removeCourseDept(dept, "Psych 555");
    //removePrereqDept(dept, "Psych 333");
    //printDept(dept);
    //checkPreReq(dept, "Psych 222");
    //printDept(dept);
    Degree *deg1 = createDeg("BS Psychology");
    DegreeReq *dr1 = createDegreeReq();
    Degree *deg2 = createDeg("BA Psychology");
    DegreeReq *dr2 = createDegreeReq();
    setDegReq(deg1, dr1);
    setDegReq(deg2, dr2);
    CourseLinkedList *cll1 = createCourseLinkedList();
    CourseLinkedList *cll2 = createCourseLinkedList();
    insertCourseLinkedList(cll1, "Psych 444");
    insertCourseLinkedList(cll1, "Psych 443");
    insertCourseLinkedList(cll2, "Psych 555");
    insertCourseLinkedList(cll2, "Psych 553");
    insertDegreeReq(dr1, cll1);
    //printDegreeReq(dr1);
    insertDegreeReq(dr2, cll2);
    //printDegreeReq(dr2);
    //printDeg(deg1);
    //printDeg(deg2);
    DegreeArrayList *dal = createDegreeArrayList();
    insertDegreeArrayList(dal, deg1);
    insertDegreeArrayList(dal, deg2);
    CourseLinkedList *clls = checkPrereqCourseBST(dept->courses, "Psych 333");
    printCourseLinkedList(clls);
    CourseNode *cn = clls->first;
    DegreeArrayList *temp = createDegreeArrayList();
    while (cn != NULL)
    {
        char *code = cn->data;
        for (int i = 0; i < dal->size; i++)
        {
            Degree *deg = dal->list[i];
            if (deg == NULL)
                return;
            DegreeReqNode *res = searchDegreeReq(dal->list[i]->req, code);
            if (res != NULL)
            {
                insertDegreeArrayList(temp, deg);
                continue;
            }
        }
        cn = cn->next;
    }
    printDegreeArrayList(temp);
}
*/

/*
//Testing for studentBST
void main(void)
{
    StudentBST *bst = createStudentBST();
    insertStudentBST(bst, "Alex Morgan");
    insertStudentBST(bst, "Bob Morgan");
    insertStudentBST(bst, "Charles Morgan");
    insertStudentBST(bst, "Devin Morgan");
    StudentBSTNode *n1 = searchStudentBST(bst, "Alex Morgan");
    StudentBSTNode *n2 = searchStudentBST(bst, "Bob Morgan");
    StudentBSTNode *n3 = searchStudentBST(bst, "Charles Morgan");
    StudentBSTNode *n4 = searchStudentBST(bst, "Devin Morgan");
    addCompletedCourseStudent(n1, "CS 150");
    addCompletedCourseStudent(n2, "CS 150");
    addCompletedCourseStudent(n2, "CS 203");
    addCompletedCourseStudent(n3, "CS 150");
    addCompletedCourseStudent(n4, "CS 150");
    addDegreeStudent(n1, "BS Computer Science");
    addDegreeStudent(n2, "BS Computer Science");
    addDegreeStudent(n3, "BS Computer Science");
    addDegreeStudent(n4, "BS Computer Science");
    printStudentBST(bst);
    printStudentBST(bst);
}
*/

//Command m testing
void main(void)
{
    StudentBST *bst = createStudentBST();
    insertStudentBST(bst, "Alex Morgan");
    insertStudentBST(bst, "Bob Morgan");

    StudentBSTNode *n1 = searchStudentBST(bst, "Alex Morgan");
    StudentBSTNode *n2 = searchStudentBST(bst, "Bob Morgan");

    addCompletedCourseStudent(n1, "CS 150");
    addCompletedCourseStudent(n2, "CS 150");
    addCompletedCourseStudent(n2, "CS 203");

    addDegreeStudent(n1, "BS Computer Science");
    addDegreeStudent(n2, "BS Computer Science");
}