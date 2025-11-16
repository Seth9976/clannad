// 函数: sub_5ac910
// 地址: 0x5ac910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND eax_3 = sub_6c4c40(arg1 + 0xe0)
WPARAM eax_4 = sub_6c4be0(arg1 + 0xe0)
POINT var_4c
POINT* lpPoint = &var_4c
__builtin_memset(&var_4c, 0, 8)
GetCursorPos(lpPoint)
POINT point
point.x = var_4c.x
point.y = var_4c.y
ScreenToClient(*(arg1 + 0xe4), &point)
WPARAM var_64
var_48
LRESULT result = sub_6c4ed0(arg1 + 0xe0, point.x, point.y, &var_64, &var_48)

if (eax_3 == 1)
    WPARAM edi_1 = var_64
    
    if (eax_4 == edi_1 && var_4c.y == 3 && edi_1 s>= 0)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x78787879, *(arg1 + 0x418) - *(arg1 + 0x414))
        int32_t edx_2 = edx_1 s>> 5
        result = (edx_2 u>> 0x1f) + edx_2
        
        if (edi_1 s< result)
            result = *(*(arg1 + 0x414) + edi_1 * 0x44 + 0xc)
            
            if (result == 0 || result == 2)
                void var_44
                int32_t* eax_10 = sub_6ae470(sub_6c4e40(arg1 + 0xe0, &var_44, edi_1, 3), 0)
                sub_52e8a0(&var_44)
                result = sub_6c52d0(arg1 + 0xe0, edi_1, 3, 0x80000000, 0x7fffffff, eax_10)
            else if (result == 3 || result == 5)
                void var_2c
                sub_6c4e40(arg1 + 0xe0, &var_2c, edi_1, 3)
                int32_t var_8_1 = 0
                void var_8c
                sub_536170(&var_8c, &var_2c)
                sub_6c5080(arg1 + 0xe0, edi_1, 3, var_8c)
                result = sub_52e8a0(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
