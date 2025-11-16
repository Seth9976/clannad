// 函数: sub_5ccf60
// 地址: 0x5ccf60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* ecx = *arg1
int32_t eax
int32_t* arg_4

if (ecx != 0)
    int32_t* esi_1 = arg_4
    
    if (esi_1 != 0)
        int32_t ebx
        int32_t var_10 = ebx
        arg_4 = nullptr
        var_8 = nullptr
        (**ecx)(ecx, &data_af2640, &arg_4)
        int32_t** var_10_1 = &var_8
        (**esi_1)(esi_1)
        int32_t* ecx_1 = var_8
        int32_t* eax_3 = arg_4
        ebx.b = eax_3 == ecx_1
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 8))(ecx_1)
            eax_3 = arg_4
        
        if (eax_3 != 0)
            (*(*eax_3 + 8))(eax_3)
        
        eax_3.b = ebx.b
        return eax_3
else if (arg_4 == ecx)
    eax.b = 1
    return eax
eax.b = 0
return eax
