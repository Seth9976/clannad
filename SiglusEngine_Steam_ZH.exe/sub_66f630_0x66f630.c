// 函数: sub_66f630
// 地址: 0x66f630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c688b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

switch (jump_table_66f720[arg2])
    case 0x66f660
        *(arg1 + 8) = 0
    case 0x66f669
        *(arg1 + 8) = 0
    case 0x66f675
        *(arg1 + 8) = (zx.o(0)).q
    case 0x66f682
        char* eax_4 = sub_745f3f(0x18)
        
        if (eax_4 == 0)
            *(arg1 + 8) = 0
        else
            *(eax_4 + 0x14) = 0xf
            *(eax_4 + 0x10) = 0
            *eax_4 = 0
            *(arg1 + 8) = eax_4
    case 0x66f6ad
        int32_t* eax_5 = sub_745f3f(0xc)
        
        if (eax_5 == 0)
            *(arg1 + 8) = 0
        else
            *eax_5 = 0
            eax_5[1] = 0
            eax_5[2] = 0
            *(arg1 + 8) = eax_5
    case 0x66f6d4
        int32_t* edi_1 = sub_745f3f(8)
        arg2 = edi_1
        int32_t var_8_1 = 0
        
        if (edi_1 == 0)
            edi_1 = nullptr
        else
            *edi_1 = 0
            edi_1[1] = 0
            *edi_1 = sub_6702b0()
        
        *(arg1 + 8) = edi_1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
