// 函数: sub_45f1a0
// 地址: 0x45f1a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
sub_4d6c40(arg1, &edi[1])
int32_t ebx
ebx.b = data_63d0d2
char* eax = &data_63d0d0
int16_t edx_1
edx_1:1.b = data_63d0d1
BOOL* i_1 = 0x20
edx_1.b = data_63d0d0
int32_t j_1
BOOL* i

do
    j_1 = 0x20
    int32_t j
    
    do
        if (*eax != edx_1.b || eax[1] != edx_1:1.b || eax[2] != ebx.b)
            eax[3] = 0xff
        else
            eax[3] = 0
        
        eax = &eax[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
BOOL i_3 = i_1
BOOL* i_4
int32_t* var_24 = &i_4
i_4 = i_1
BOOL* i_2 = i_1
BOOL result_1 = i_1
void* eax_2 =
    sub_581fe0(&i_3, j_1 + 0x20, &data_63d0d0, 0x20, 1, i_1, i_1, 0x1f, 0x1f, i_1, i_1, &i_3)
sub_4d24d0(eax_2, &result_1, &i_2, 1, i_4, eax_2, "AVG_CAPTURE_MOUSE_CURSOR_ARROW")
sub_4d6c40(&i_3, &i_4)
sub_4d6c40(edi, &edi[1])
*edi = i_2
BOOL result = result_1
edi[1] = result
edi[5] = 2
return result
