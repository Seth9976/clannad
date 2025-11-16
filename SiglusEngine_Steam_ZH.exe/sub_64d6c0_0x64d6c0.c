// 函数: sub_64d6c0
// 地址: 0x64d6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t* ecx = arg3
int32_t eax = *ecx

if (eax == ecx[1])
    eax = 0

int32_t eax_1 = *arg5

if (eax_1 == arg5[1])
    eax_1 = 0

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(ecx[3])
int32_t j_3 = divs.dp.d(edx_2:eax_3, arg5[3])
int32_t j_2 = j_3
int32_t j_1 = j_3

if (mods.dp.d(edx_2:eax_3, arg5[3]) != 0)
    j_1 += 1
    j_2 = j_1

int32_t eax_6
int32_t edx_4
edx_4:eax_6 = sx.q(ecx[4])
int32_t i_1 = divs.dp.d(edx_4:eax_6, arg5[4])
int32_t i_2 = i_1

if (mods.dp.d(edx_4:eax_6, arg5[4]) != 0)
    i_1 += 1
    i_2 = i_1

int32_t edx_6 = 0
int32_t var_c = 0

if (i_1 s> 0)
    int32_t i
    
    do
        int32_t esi_1 = 0
        
        if (j_1 s> 0)
            int32_t eax_7 = arg5[3]
            int32_t j
            
            do
                sub_6c97b0(eax_7, ecx[3], eax, ecx[4], eax_1, eax_7, arg5[4], esi_1, edx_6)
                eax_7 = arg5[3]
                ecx = arg3
                esi_1 += eax_7
                edx_6 = var_c
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
            j_1 = j_2
        
        edx_6 += arg5[4]
        i = i_1
        i_1 -= 1
        var_c = edx_6
        i_2 = i_1
    while (i != 1)

i_1.b = 1
return i_1
