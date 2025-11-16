// 函数: sub_58c000
// 地址: 0x58c000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND eax_3 = sub_6c4c40(arg1 + 0xe0)
WPARAM eax_4 = sub_6c4be0(arg1 + 0xe0)
POINT var_50
POINT* lpPoint = &var_50
__builtin_memset(&var_50, 0, 8)
GetCursorPos(lpPoint)
POINT point
point.x = var_50.x
point.y = var_50.y
ScreenToClient(*(arg1 + 0xe4), &point)
WPARAM var_64
var_4c
LRESULT result = sub_6c4ed0(arg1 + 0xe0, point.x, point.y, &var_64, &var_4c)

if (eax_3 == 1)
    WPARAM edi_1 = var_64
    
    if (eax_4 == edi_1 && var_50.y == eax_3)
        void* esi_2 = edi_1 * 0xb8 + *(*data_bac428 + *(arg1 + 0x414) * 0x24 + 0x18)
        void var_8c
        void var_2c
        
        if (*(esi_2 + 0xa8) == 0)
            result = *(esi_2 + 0x7c)
            
            if (result s>= 3)
                result = sub_54b180(0)
                
                if (result != 0)
                    result = *(result + 0x80)
                    
                    if (result == 0xb)
                    label_58c191:
                        int32_t* eax_12 = sub_6ae470(sub_6c4e40(arg1 + 0xe0, &var_2c, edi_1, 1), 0)
                        sub_52e8a0(&var_2c)
                        result = sub_6c52d0(arg1 + 0xe0, edi_1, 1, 0x80000000, 0x7fffffff, eax_12)
                    else if (result == 0x15)
                        void var_44
                        sub_6c4e40(arg1 + 0xe0, &var_44, edi_1, 1)
                        int32_t var_8_2 = 1
                        sub_536170(&var_8c, &var_44)
                        sub_6c5080(arg1 + 0xe0, edi_1, 1, var_8c)
                        result = sub_52e8a0(&var_44)
        else
            void* ecx_6 = data_bac45c
            result = sub_697e70(ecx_6, *(ecx_6 + 0x64), esi_2 + 0x98)
            
            if (result s>= 0)
                result = sub_621ac0(result)
                
                if (result != 0)
                    result = *(result + 4)
                    
                    if (result == 0xa || result == 0xb)
                        goto label_58c191
                    
                    if (result == 0x14 || result == 0x15)
                        sub_6c4e40(arg1 + 0xe0, &var_2c, edi_1, 1)
                        int32_t var_8_1 = 0
                        sub_536170(&var_8c, &var_2c)
                        sub_6c5080(arg1 + 0xe0, edi_1, 1, var_8c)
                        result = sub_52e8a0(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
