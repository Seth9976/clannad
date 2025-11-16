// 函数: sub_6a0780
// 地址: 0x6a0780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9b76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx

if (arg1 u> 0xc)
    void* edx_9 = data_bac510
    
    if (arg1 s< 0x64 || arg1 s>= *(edx_9 + 0xb738) + 0x64)
        if (arg1 s>= 0x12c && arg1 s< (*(edx_9 + 0xb7ac) << 3) + 0x12c)
            int32_t eax_16
            int32_t edx_10
            edx_10:eax_16 = sx.q(arg1 - 0x12c)
            result = (eax_16 + (edx_10 & 7)) s>> 3
            
            if (result u<= 3)
                void* esi_2 = (arg1 - 0x12c) & 0x80000007
                
                if (esi_2 s< 0)
                    esi_2 = ((esi_2 - 1) | 0xfffffff8) + 1
                
                *(data_bac498 + (result << 3) + 0x34) = esi_2
    else if (arg1 - 0x64 u<= 3)
        void* ecx_27 = arg1 - 0x64 + data_bac498 + ((arg1 - 0x64) << 1) + 0x18
        result.b = *(ecx_27 + 0xc) == 0
        *(ecx_27 + 0xc) = result.b
else
    switch (arg1)
        case 1
            arg1.b = *data_bac498 == 0
            sub_65ffe0(arg1.b)
        case 2
            void* ecx = data_bac498
            result.b = *(ecx + 1) == 0
            *(ecx + 1) = result.b
        case 3
            void* ecx_1 = data_bac4e4
            result.b = *(ecx_1 + 0x141) == 0
            *(ecx_1 + 0x141) = result.b
        case 4
            void* ecx_2 = data_bac498
            result.b = *(ecx_2 + 2) == 0
            *(ecx_2 + 2) = result.b
        case 5
            void* var_b0_1 = arg1
            edx.b = 1
            arg1.b = 0
            sub_6603b0(arg1.b, edx.b)
        case 6
            arg1.b = 0
            sub_6605b0(arg1)
        case 7
            if (sub_60e120(data_bac510 + 0x10b58) != 7)
                *(data_bac4a0 + 0x1e4) = 0
                sub_676610(9)
                sub_676610(4)
                int32_t var_b0_2 = sub_676610(2)
                sub_6018e0(data_bac468 + 0x304, 7)
        case 8
            sub_661290()
        case 9
            result = data_bac510
            
            if (result[0x1d] != 0)
                void var_5c
                int16_t* eax_5 = sub_532b80(result, data_bac4d8 + 0x18, &var_5c, &data_ad900c)
                int32_t var_8_1 = 0
                var_8_1.b = 1
                void var_8c
                sub_6b52f0(sub_5327a0(eax_5, eax_5, &var_8c, data_bac510 + 0x64))
                sub_52e8a0(&var_8c)
                sub_52e8a0(&var_5c)
        case 0xa
            void var_a4
            int16_t* eax_7 = sub_532b80(result, data_bac510 + 0x1c, &var_a4, 0xaf4300)
            int32_t var_8_2 = 2
            void var_74
            int16_t* eax_8 = sub_5327a0(eax_7, eax_7, &var_74, data_bac510 + 0x34)
            var_8_2.b = 3
            void var_44
            int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_44, u"\nSiglus Ver.")
            var_8_2.b = 4
            var_8_2.b = 5
            void var_2c
            sub_60e1c0(sub_5327a0(eax_9, eax_9, &var_2c, &data_b8fc38))
            sub_52e8a0(&var_2c)
            sub_52e8a0(&var_44)
            sub_52e8a0(&var_74)
            sub_52e8a0(&var_a4)
        case 0xb
            edx.b = 1
            arg1.b = 1
            sub_660fd0(result, edx.b, arg1.b, 1, 0)
        case 0xc
            arg1.b = 1
            sub_661130(result, edx, arg1, 0)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
