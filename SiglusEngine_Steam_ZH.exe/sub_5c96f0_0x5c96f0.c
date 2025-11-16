// 函数: sub_5c96f0
// 地址: 0x5c96f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BSTR esi = arg1
sub_5c97d0()
int32_t* var_8 = nullptr
int32_t* var_10 = nullptr
int32_t result = sub_5cc140(&var_8)

if (result s>= 0)
    int32_t* eax_1 = var_8
    int32_t* var_c = nullptr
    (**eax_1)(eax_1, 0xaf24ec, &var_c)
    
    if (esi != 0)
        esi = SysAllocString(esi)
        
        if (esi == 0)
            sub_5c4990(0x8007000e)
            noreturn
    
    int32_t* eax_2 = var_c
    result = (*(*eax_2 + 0x28))(eax_2, esi, arg2, arg3, &var_10, &data_aac190, 0, arg5)
    SysFreeString(esi)
    int32_t* eax_4 = var_c
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)

int32_t* eax_5 = var_8

if (arg4 != 0)
    if (result s< 0)
        *arg4 = nullptr
    else
        *arg4 = eax_5
        eax_5 = nullptr
        var_8 = nullptr

int32_t* ecx_4 = var_10

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    eax_5 = var_8

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)

return result
