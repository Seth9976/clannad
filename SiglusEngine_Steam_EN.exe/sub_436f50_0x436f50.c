// 函数: sub_436f50
// 地址: 0x436f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg5
int32_t ebx = arg2
int32_t* var_414 = eax_2
int32_t esi = arg3

if (esi s> ebx)
    int32_t eax_3 = esi
    esi = ebx
    ebx = eax_3
    eax_2 = var_414

if (esi != 0x3e7)
    if (esi s< 0 || ebx s>= 0x200)
        if (data_702fc0 != 0)
            void text
            
            if (esi != ebx)
                int32_t var_42c_6 = ebx
                int32_t var_430_2 = esi
                sub_4c84d0(&text, "OBJECT.%03d:%03d\n")
            else
                int32_t var_42c_5 = esi
                sub_4c84d0(&text, "OBJECT.%03d\n")
            
            if (arg6 != 0)
                MessageBoxA(arg6, &text, "Gameexe.ini ", MB_OK)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
    
    int32_t eax_4 = esi
    int32_t var_410_1 = eax_4
    
    if (ebx - esi + 1 s> 0)
        int32_t i = 0
        
        do
            sub_436e40(eax_4, arg4, eax_4, var_414)
            i += 1
            eax_4 = var_410_1 + 1
            var_410_1 = eax_4
        while (i s< ebx - esi + 1)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
else
    sub_436e40(eax_2, arg4, 0x200, eax_2)
    int32_t var_40c_1 = 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
