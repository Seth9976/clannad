// 函数: sub_4608d0
// 地址: 0x4608d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* i = arg3
char* ecx = nullptr
int32_t var_8 = arg2

if (i == 0)
    arg3 = nullptr
    int32_t ebx = 0
    
    do
        if (arg2 u<= 0x3f && ebx u<= 7)
            int32_t* esi_2 = arg2 * 0x3920 + 0xf8c79c + i
            sub_57ee30(ecx + &data_8fcb48 + arg2 * 0x2d0, esi_2)
            esi_2[0x1e] += 1
            ecx = arg3
            arg2 = var_8
        
        i = &i[0x128]
        ecx = &ecx[0x40]
        ebx += 1
        arg3 = ecx
    while (i s< 0x940)
    
    return 

void* i_1 = nullptr
arg3 = nullptr
void* i_2 = nullptr
int32_t ebx_1 = 0

do
    if (*i == 0)
        i = &i[1]
        
        if (arg2 u<= 0x3f && ebx_1 u<= 7)
            int32_t* esi_4 = i_1 + 0xf8c79c + arg2 * 0x3920
            sub_57ee30(ecx + &data_8fcb48 + arg2 * 0x2d0, esi_4)
            esi_4[0x1e] += 1
            i_1 = i_2
            ecx = arg3
            arg2 = var_8
    else
        char* i_3 = i
        char* i_4 = i
        int32_t edx_1 = 0
        
        do
            ecx.b = *i_4
            
            if (ecx.b u< 0x80)
                edx_1 += 1
                i_4 = &i_4[1]
            else if (ecx.b u< 0xa0)
                if (ecx.b u>= 0xfe)
                    edx_1 += 1
                    i_4 = &i_4[1]
                else
                    edx_1 += 2
                    i_4 = &i_4[2]
            else if (ecx.b u<= 0xdf || ecx.b u>= 0xfe)
                edx_1 += 1
                i_4 = &i_4[1]
            else
                edx_1 += 2
                i_4 = &i_4[2]
        while (*i_4 != 0)
        
        void* edi = &i[edx_1 + 1]
        i = edi + 0x1c
        sub_57ef70(edi, ebx_1, var_8, i_3, *edi, 1, 0)
        ecx = arg3
        arg2 = var_8
    
    i_1 += 0x128
    ecx = &ecx[0x40]
    ebx_1 += 1
    i_2 = i_1
    arg3 = ecx
while (i_1 s< 0x940)
