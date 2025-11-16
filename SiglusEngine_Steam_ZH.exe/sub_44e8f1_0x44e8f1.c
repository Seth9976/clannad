// 函数: sub_44e8f1
// 地址: 0x44e8f1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t* var_8 = nullptr
int32_t var_c = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* ebx

if (eax == 0)
    ebx = nullptr
else
    ebx = sub_446745(eax)

if (ebx == 0)
    return 0x8007000e

if (arg4 u<= 0)
label_44e96e:
    int32_t esi_4 = not.d(arg2)
    int32_t* eax_4 = *(esi_4 + 4)
    int32_t ecx_7
    ecx_7.b = *(esi_4 + 8) != 0xffffffff
    int32_t* var_10 = nullptr
    int32_t var_28_2 = ecx_7
    int32_t* var_2c_1 = &var_10
    int32_t var_30_1 = 0
    int32_t* eax_5 = sub_4469e0(eax_4, var_c)
    arg3 = eax_5
    
    if (eax_5 s>= 0)
        int32_t* eax_6 = var_10
        int32_t** eax_8 = sub_745f3f((eax_6 << 3) + 4)
        
        if (eax_8 == 0)
            var_8 = nullptr
        else
            *eax_8 = eax_6
            sub_61cdd0(&eax_8[1], 8, eax_6, sub_446a00)
            var_8 = &eax_8[1]
        
        if (var_8 == 0)
            arg3 = 0x8007000e
        else
            int32_t eax_11
            eax_11.b = *(esi_4 + 8) != 0xffffffff
            int32_t var_28_4 = eax_11
            int32_t var_2c_3 = 0
            int32_t* var_30_2 = var_8
            int32_t* eax_12 = sub_4469e0(eax_4, var_c)
            arg3 = eax_12
            
            if (eax_12 s>= 0)
                ebx[1] = arg2
                ebx[2] = arg4
                *ebx = 0
                ebx[3] = var_c
                ebx[4] = var_10
                ebx[5] = var_8
                (*(arg1 + 0xfc))[6] = ebx
                *(arg1 + 0xfc) = ebx
                var_c = 0
                var_8 = nullptr
                ebx = nullptr
else
    int32_t eax_2 = sub_745f3f(arg4)
    var_c = eax_2
    
    if (eax_2 != 0)
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_2, arg3, arg4 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, arg4 & 3)
        goto label_44e96e
    
    arg3 = 0x8007000e

if (var_c != 0)
    j__free(var_c)

if (var_8 != 0)
    sub_449fd0(var_8, 3)

if (ebx != 0)
    sub_44ce0e(ebx, 1)

return arg3
