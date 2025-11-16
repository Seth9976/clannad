// 函数: sub_4e8444
// 地址: 0x4e8444
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
var_8 = 0
int32_t esi
int32_t var_c = esi
int32_t* eax = arg10[8](arg10[0xa], 0x120, 4)

if (eax == 0)
    return 0xfffffffc

int32_t edi
int32_t var_20_1 = edi
int32_t result_1 = sub_4e8035(arg5, arg4, arg2, 0x101, 0xaced10, 0xaced90, arg7, arg9, &var_8, eax)
int32_t result

if (result_1 != 0)
    if (result_1 != 0xfffffffd)
        if (result_1 != 0xfffffffc)
            goto label_4e8522
        
        result = result_1
    else
        arg10[6] = "oversubscribed literal/length tree"
        result = result_1
else if (*arg5 == 0)
label_4e8522:
    arg10[6] = "incomplete literal/length tree"
    result = 0xfffffffd
else
    result_1 = sub_4e8035(arg6, &arg4[arg2], arg3, 0, 0xacee10, 0xacee88, arg8, arg9, &var_8, eax)
    
    if (result_1 != 0)
        if (result_1 == 0xfffffffd)
            arg10[6] = "oversubscribed distance tree"
            result = result_1
        else if (result_1 != 0xfffffffb)
            if (result_1 != 0xfffffffc)
                goto label_4e8506
            
            result = result_1
        else
            arg10[6] = "incomplete distance tree"
            result = 0xfffffffd
    else if (*arg6 != 0 || arg2 u<= 0x101)
        result = 0
    else
    label_4e8506:
        arg10[6] = "empty distance tree with lengths"
        result = 0xfffffffd

arg10[9](arg10[0xa], eax)
return result
