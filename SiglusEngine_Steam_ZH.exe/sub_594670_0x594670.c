// 函数: sub_594670
// 地址: 0x594670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b8278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result = arg2 - 0x4ea
void* edi_1

if (arg2 == 0x4ea)
    edi_1 = arg1 + 0x14c
label_5946c8:
    
    if (edi_1 != 0)
        HWND eax_6 = sub_6c4c40(edi_1)
        WPARAM eax_7 = sub_6c4be0(edi_1)
        int32_t point = 0
        int32_t var_44_1 = 0
        GetCursorPos(&point)
        POINT point_1
        point_1.x = point
        point_1.y = var_44_1
        ScreenToClient(*(edi_1 + 4), &point_1)
        WPARAM var_38
        result = sub_6c4ed0(edi_1, point_1.x, point_1.y, &var_38, &point)
        
        if (eax_6 == 1)
            WPARAM esi_2 = var_38
            
            if (eax_7 == esi_2 && point == 1)
                void var_34
                sub_6c4e40(edi_1, &var_34, esi_2, 1)
                int32_t var_c_1 = 0
                sub_6c52a0(edi_1, esi_2, 1)
                result = sub_52e8a0(&var_34)
else
    LRESULT result_1 = result
    result -= 2
    
    if (result_1 == 2)
        edi_1 = arg1 + 0x480
        goto label_5946c8
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_4c)
return result
