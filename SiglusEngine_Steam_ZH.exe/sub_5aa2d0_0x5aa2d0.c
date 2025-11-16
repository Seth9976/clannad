// 函数: sub_5aa2d0
// 地址: 0x5aa2d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b9eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND eax_5 = sub_6c4c40(arg1 + 0xe0)
WPARAM eax_6 = sub_6c4be0(arg1 + 0xe0)
int32_t var_68
int32_t* lpPoint = &var_68
var_68 = 0
int32_t var_64 = 0
GetCursorPos(lpPoint)
POINT point
point.x = var_68
point.y = var_64
ScreenToClient(*(arg1 + 0xe4), &point)
WPARAM var_50
LRESULT result = sub_6c4ed0(arg1 + 0xe0, point.x, point.y, &var_50, &var_68)

if (eax_5 == 1)
    WPARAM edi_1 = var_50
    
    if (eax_6 == edi_1 && var_68 == 2)
        void* ecx_5 = data_bac460
        void* eax_9 = sub_548970(ecx_5 + 4, *(ecx_5 + 0xb8) - 1, 1)
        result = (*(eax_9 + 0x148) - *(eax_9 + 0x144)) s/ 0x16c
        
        if (edi_1 s>= 0 && edi_1 s< result)
            result = sub_65d2d0()
            int32_t ecx_9 = edi_1 * 0x16c
            
            if (ecx_9 != neg.d(*(result + 0x144)))
                result = *(ecx_9 + *(result + 0x144) + 4)
                
                if (result == 0xa)
                    void var_34
                    int32_t* eax_14 = sub_6ae470(sub_6c4e40(arg1 + 0xe0, &var_34, edi_1, 2), 0)
                    sub_52e8a0(&var_34)
                    result = sub_6c52d0(arg1 + 0xe0, edi_1, 2, 0x80000000, 0x7fffffff, eax_14)
                else if (result == 0x14)
                    void var_4c
                    sub_6c4e40(arg1 + 0xe0, &var_4c, edi_1, 2)
                    int32_t var_c_1 = 0
                    void var_94
                    sub_536170(&var_94, &var_4c)
                    sub_6c5080(arg1 + 0xe0, edi_1, 2, var_94)
                    result = sub_52e8a0(&var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_6c)
return result
