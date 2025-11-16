// 函数: sub_5a50a0
// 地址: 0x5a50a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
LRESULT eax = arg4
int32_t* ecx = *(arg1 + 0x444)

if (ecx != 0)
    sub_5a7250(arg2, arg3, eax)
    eax = arg4

if (arg2 u> 0x110)
    if (arg2 != 0x111)
    label_5a5142:
        
        if (arg2 == 6 && arg3.w == 0)
            sub_681b70(arg1)
    else
        int32_t* var_1c_3 = ecx
        
        if (sub_5a5ae0(arg1, arg3) == 0)
            return 0
else if (arg2 == 0x110)
    if (sub_5a5170(arg1) == 0)
        return 0
else if (arg2 == 0x10)
    if (sub_5a5950(arg1) == 0)
        return 0
else
    if (arg2 != 0x4e)
        goto label_5a5142
    
    LRESULT var_1c_2 = eax
    
    if (sub_5a5be0(arg1, ecx) == 0)
        return 0

return sub_6c4530(arg1, arg2, arg3, arg4)
