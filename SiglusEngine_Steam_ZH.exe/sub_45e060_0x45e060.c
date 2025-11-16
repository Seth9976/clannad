// 函数: sub_45e060
// 地址: 0x45e060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int16_t arg_a = 0
var_8 = nullptr
uint32_t arg_8
int32_t eax = sub_45acfb(arg2, arg_8)

if (eax == 0)
    arg_8 = zx.d(*(arg2 + 0x7a))

int32_t result = sub_45c417(arg2, &arg_8, 1, &var_8)

if (result s>= 0)
    int32_t* esi_1 = var_8
    int32_t eax_2
    
    if (esi_1 != 0)
        eax_2 = *esi_1
    
    if (esi_1 == 0 || eax_2 == 0xffffffff)
        if (arg3 != 0)
            *arg3 = 0
        
        int32_t edi
        int32_t var_14_3 = edi
        
        if (arg4 != 0)
            *arg4 = 0
            void* edi_2 = &arg4[1]
            *edi_2 = 0
            void* edi_3 = edi_2 + 4
            *edi_3 = 0
            *(edi_3 + 4) = 0
        
        if (arg5 != 0)
            *arg5 = 0
            arg5[1] = 0
    else
        if (arg3 != 0)
            *arg3 = eax_2
            int32_t* eax_3 = *esi_1
            (*(*eax_3 + 4))(eax_3)
        
        if (arg4 != 0)
            *arg4 = zx.d(esi_1[1].w)
            arg4[1] = zx.d(*(esi_1 + 6))
            arg4[2] = zx.d(esi_1[2].w)
            arg4[3] = zx.d(*(esi_1 + 0xa))
        
        if (arg5 != 0)
            *arg5 = sx.d(esi_1[3].w)
            arg5[1] = sx.d(*(esi_1 + 0xe))
    
    result.b = eax == 0

return result
