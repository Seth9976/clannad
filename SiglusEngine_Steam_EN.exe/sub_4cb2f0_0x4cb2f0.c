// 函数: sub_4cb2f0
// 地址: 0x4cb2f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t result = *arg1

if (result == 1 || result == 2)
    if (arg1[1] != 0)
        int32_t* eax = arg1[5]
        (*(*eax + 0x20))(eax, *(arg1 + 0x178))
        
        if (arg1[1] != 0)
            int32_t* ecx_1 = arg1[5]
            void* var_10_1 = &arg1[0x64]
            int64_t var_14_1
            var_14_1.d = ecx_1
            
            if ((*(*ecx_1 + 0x24))(var_14_1) s>= 0
                    && not(0x3ff0000000000000 f<= *(arg1 + 0x198) f- *(arg1 + 0x190))
                    && arg1[1] != 0)
                int32_t* eax_3 = arg1[5]
                (*(*eax_3 + 0x20))(eax_3, (zx.o(0)).q)
    
    int32_t* eax_4 = arg1[4]
    int32_t* var_10_2 = eax_4
    result = (*(*eax_4 + 0x1c))()
    
    if (result s>= 0)
        result = sub_4cb180(arg1)
        *arg1 = 3

return result
