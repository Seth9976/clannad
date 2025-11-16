// 函数: sub_458da0
// 地址: 0x458da0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
void* arg_14
int32_t arg_18
int32_t i_2
int32_t arg_20
sub_4d2170(&arg_14, arg7, arg6, &arg_14, &arg_18, &i_2, &arg_20)
void* ebx = arg_14
void* edx_2 = i_2 - ebx
arg3[5] = arg4
int32_t i_3 = arg_20 - arg_18 + 1
arg3[4] = arg2
i_2 = i_3
arg3[3] = i_3
uint32_t eax_4 = i_3 * (edx_2 + 1)
arg3[2] = edx_2 + 1
sub_4d6960(eax_4, &arg3[1], arg3, eax_4, "AVGMASK")
void* j_2 = edx_2 + 1
arg_14 = arg3[1]
void* ecx_3 = arg6 * arg_18
arg_20 = (arg6 - j_2) << 2
void* result = arg5 + ((ecx_3 + ebx) << 2)
int32_t i_1 = i_2

if (i_1 s> 0)
    int32_t ebx_1 = arg_20
    int32_t i
    
    do
        if (j_2 s> 0)
            void* j_1 = j_2
            void* j
            
            do
                uint32_t esi_2 = zx.d(*(result + 2))
                int32_t ebx_2 = *(data_1cd432c + (zx.d(*(result + 3)) << 2))
                uint32_t edx_6 = zx.d(*(result + 1))
                result += 4
                char* edx_7 = arg_14
                *edx_7 = ((ebx_2 + *(data_1cd4330 + (esi_2 << 2)) + *(data_1cd4334 + (edx_6 << 2)))
                    s>> 8).b
                arg_14 = &edx_7[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
            j_2 = edx_2 + 1
            ebx_1 = arg_20
        
        result += ebx_1
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
