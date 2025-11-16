// 函数: sub_69a680
// 地址: 0x69a680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = __chkstk(0x2004)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t result

if (*arg2 != 0x3d)
    result = 0
else
    result = sub_69a090(ecx, arg2)
    
    if (result s>= 0)
        sub_69a040(ecx)
        int16_t var_2008[0xffc]
        result = sub_69a090(ecx, &var_2008)
        
        if (result s>= 0)
            result = sub_69a090(ecx, arg2)
            
            if (result s>= 0)
                result = 0

sub_745f2b(arg1 ^ &__saved_ebp)
return result
