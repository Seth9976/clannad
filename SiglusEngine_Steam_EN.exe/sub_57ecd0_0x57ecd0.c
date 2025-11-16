// 函数: sub_57ecd0
// 地址: 0x57ecd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t ebx = arg1

if (ebx u> 0x3f)
    return 

char* eax = *(ebx * 0x2d0 + &data_8fcb20)
*(ebx * 0x2d0 + &data_8fcb20) = 0

if (arg2 == 0 || *arg2 == 0 || eax != 2 || *(ebx * 0x2d0 + 0x8fcb28) == 0)
    return 

int32_t edx = 0
char* eax_3 = arg2

do
    arg1.b = *eax_3
    
    if (arg1.b u< 0x80)
        eax_3 = &eax_3[1]
    else if (arg1.b u< 0xa0)
        if (arg1.b u>= 0xfe)
            eax_3 = &eax_3[1]
        else
            eax_3 = &eax_3[2]
    else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
        eax_3 = &eax_3[1]
    else
        eax_3 = &eax_3[2]
    
    edx += 1
while (*eax_3 != 0)

if (*(ebx * 0x2d0 + 0x8fcb2c) == 0)
    sub_57ea60(&(&data_1090ae4)[ebx * 0x75], arg2, ebx, edx, *(ebx * 0x1d4 + 0x1090c00), 
        *(ebx * 0x2d0 + 0x8fcb30), *(ebx * 0x2d0 + 0x8fcb34), *(ebx * 0x2d0 + 0x8fcb38))
    return 

char* var_1c_1 = arg2
eax = sub_4c84d0(&data_7027c0, "%s")

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x6245cc, &data_7027c0), data_72d6ac, 
            data_719b6c, 0x6245cc, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x6245cc, &data_7027c0)
