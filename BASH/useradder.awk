BEGIN{}
{
split($1, FULLNAME, " ")
LAST_I=tolower(substr(FULLNAME[1], 2, 1))
FIRST_I=tolower(substr(FULLNAME[2], 1, 1))
MID_I=tolower(substr(FULLNAME[3], 1, 1))
LOGIN=FIRST_I MID_I LAST_I
print LOGIN 
}
