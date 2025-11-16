// 函数: sub_6bfec0
// 地址: 0x6bfec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
HANDLE edi = GetPropW(arg1, u"this")

if (edi == 0)
    if (arg2 != 1 && arg2 != 0x81)
        if (arg2 == 0x110)
            if (*arg4 == 0x38)
                edi = arg4[7]
            else
                edi = arg4
            
            goto label_6bff09
        
    label_6bff51:
        
        if (GetWindowLongW(arg1, 0x4) == 0)
            return DefWindowProcW(arg1, arg2, arg3, arg4)
        
        return 0
    
    edi = *arg4
label_6bff09:
    
    if (edi == 0)
        goto label_6bff51
    
    sub_6c0100(edi, arg1)

(**edi)(arg2, arg3, arg4)
int32_t result = (*(*edi + 4))(arg2, arg3, arg4)

if (arg2 == 2)
    sub_6c01f0(edi)

return result
