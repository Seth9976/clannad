// 函数: sub_4ac590
// 地址: 0x4ac590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = data_7030b0
int32_t var_28 = arg5
int32_t var_c = data_7030ac
int32_t ebx = data_703098
int32_t var_30 = arg4
void* esi = data_1bfe300:8
void* var_2c = arg3
int32_t edi = data_70309c

if (arg6 - 2 u<= 5)
    switch (arg6)
        case 2, 3
            int32_t eax_7 = (arg2 - 1) * arg5
            var_8 += eax_7
            edi += eax_7
            var_28 = neg.d(arg5)
        case 5, 7
            int32_t eax_11 = (arg3 - 1) * arg4
            var_c += eax_11
            ebx += eax_11
            var_30 = neg.d(arg4)

int32_t var_18 = arg5 - 1 + edi
int32_t var_1c = var_8 + arg5 - 1
int32_t var_20 = arg4 - 1 + ebx
void* i_4 = arg2
int32_t var_24 = var_c + arg4 - 1
int32_t var_10 = arg6 & 1
uint32_t eax_25 = arg6

if (eax_25 u<= 7)
    int32_t var_10_1
    
    switch (eax_25)
        case 0, 2, 4, 5
            var_10_1 = 0
        case 1, 3, 6, 7
            var_10_1 = 1
    
    eax_25 = zx.d(lookup_table_4ac754[arg6])
    
    switch (eax_25)
        case 0
            if (i_4 s> 0)
                void* i_2 = i_4
                int32_t eax_29 = arg3 * 0x28
                int32_t eax_31 = var_8 - edi
                int32_t var_8_1 = eax_31
                void* i
                
                do
                    int32_t eax_32 = eax_31 + edi
                    sub_4ac440(eax_32, arg3, esi, arg4, edi, var_18, eax_32, var_1c, var_10_1)
                    var_18 += var_28
                    edi += var_28
                    var_1c += var_28
                    esi += eax_29
                    arg3 = var_2c
                    eax_31 = var_8_1
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                return eax_31
        case 1
            if (arg3 s> 0)
                void* i_3 = arg3
                int32_t ecx_1 = var_20
                int32_t eax_35 = i_4 * 0x28
                eax_25 = var_c - ebx
                uint32_t var_c_1 = eax_25
                void* i_1
                
                do
                    int32_t eax_37 = eax_25 + ebx
                    sub_4ac4e0(eax_37, i_4, esi, arg5, ebx, ecx_1, eax_37, var_24, var_10_1)
                    ebx += var_30
                    var_24 += var_30
                    ecx_1 = var_20 + var_30
                    esi += eax_35
                    i_4 = arg2
                    eax_25 = var_c_1
                    var_20 = ecx_1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)

return eax_25
