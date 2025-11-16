// 函数: sub_4ac760
// 地址: 0x4ac760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = data_7030b0
int32_t var_28 = arg5
int32_t var_c = data_7030ac
int32_t ebx = data_703098
int32_t var_2c = arg4
void* esi = data_1bfe300:8
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
            var_2c = neg.d(arg4)

int32_t var_18 = arg5 - 1 + edi
int32_t var_1c = var_8 + arg5 - 1
int32_t var_20 = arg4 - 1 + ebx
void* edx_4 = arg2
int32_t var_24 = var_c + arg4 - 1
int32_t eax_23 = arg6

if (eax_23 u<= 7)
    int32_t var_10_1
    
    switch (eax_23)
        case 0, 2, 4, 5
            var_10_1 = 0
        case 1, 3, 6, 7
            var_10_1 = 1
    
    eax_23 = zx.d(lookup_table_4ac934[arg6])
    
    switch (eax_23)
        case 0
            int32_t ebx_1 = 0
            
            if (edx_4 s> 0)
                int32_t edx_6 = var_8 - edi
                int32_t var_8_1 = edx_6
                void* ecx = arg3
                
                do
                    int32_t eax_31 = edx_6 + edi
                    sub_4ac440(eax_31, ecx, esi, arg4, edi, var_18, eax_31, var_1c, 
                        (var_10_1 + ebx_1) & 1)
                    ebx_1 += 1
                    esi += arg3 * 0x28
                    var_18 += var_28
                    edi += var_28
                    var_1c += var_28
                    ecx = arg3
                    edx_6 = var_8_1
                while (ebx_1 s< arg2)
                
                return var_28
        case 1
            int32_t edi_1 = 0
            
            if (arg3 s> 0)
                int32_t ecx_2 = var_20
                int32_t eax_34 = edx_4 * 0x28
                int32_t var_c_1 = var_c - ebx
                
                do
                    int32_t eax_39 = var_c_1 + ebx
                    sub_4ac4e0(eax_39, edx_4, esi, arg5, ebx, ecx_2, eax_39, var_24, 
                        (var_10_1 + edi_1) & 1)
                    eax_23 = var_2c
                    edi_1 += 1
                    esi += eax_34
                    ecx_2 = var_20 + eax_23
                    var_24 += eax_23
                    ebx += eax_23
                    edx_4 = arg2
                    var_20 = ecx_2
                while (edi_1 s< arg3)

return eax_23
