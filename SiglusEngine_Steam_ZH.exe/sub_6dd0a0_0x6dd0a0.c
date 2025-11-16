// 函数: sub_6dd0a0
// 地址: 0x6dd0a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc846
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_7 = arg2
void* ecx = *(arg1 + 0x18)
void* i_6 = i_7
void* i_4 = i_7
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    result = *arg1
    
    if (result == 0)
        void* eax_3 = sub_6ddbd0(ecx, nullptr)
        void* edx_1 = data_4ebe47c
        
        if (data_4ebe480 - edx_1 s< eax_3)
            sub_5979b0(&data_4ebe47c, eax_3)
            edx_1 = data_4ebe47c
        
        sub_6ddbd0(*(arg1 + 0x18), edx_1)
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_4 = *(arg1 + 0xc)
        void* i_8 = i_4
        int32_t esi_2 = data_4ebe47c
        int32_t i = *(arg1 + 0x10)
        
        do
            void* edi
            edi, esi_2 = __builtin_memcpy(i_8, esi_2, ecx_4 << 2)
            i_8 = edi + arg3 - (ecx_4 << 2)
            i -= 1
        while (i != 0)
        
        result.b = 1
    else if (result == 1)
        void* eax_7 = sub_6ddb40(ecx, nullptr)
        char* edx_3 = data_4ebe47c
        
        if (data_4ebe480 - edx_3 s< eax_7)
            sub_5979b0(&data_4ebe47c, eax_7)
            edx_3 = data_4ebe47c
        
        sub_6ddb40(*(arg1 + 0x18), edx_3)
        int16_t* ecx_13 = data_4ebe47c
        i_4 = nullptr
        void* esi_3 = &ecx_13[1 + zx.d(*ecx_13) * 2]
        
        if (*(arg1 + 0x10) s> 0)
            result = *(arg1 + 0xc)
            void* i_1
            
            do
                int32_t edx_4 = 0
                void* i_10 = i_7
                
                if (result s> 0)
                    do
                        uint32_t eax_8 = zx.d(*esi_3)
                        i_10 += 4
                        edx_4 += 1
                        esi_3 += 1
                        *(i_10 - 4) = *(ecx_13 + 2 + (eax_8 << 2))
                        result = *(arg1 + 0xc)
                    while (edx_4 s< result)
                    
                    i_7 = i_6
                
                i_7 += arg3
                i_1 = i_4 + 1
                i_4 = i_1
                i_6 = i_7
            while (i_1 s< *(arg1 + 0x10))
        
        result.b = 1
    else if (result == 2)
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_16 = *(arg1 + 0xc)
        void* i_9 = i_4
        void* esi_5 = ecx
        int32_t i_2 = *(arg1 + 0x10)
        
        do
            void* edi_3
            edi_3, esi_5 = __builtin_memcpy(i_9, esi_5, ecx_16 << 2)
            i_9 = edi_3 + arg3 - (ecx_16 << 2)
            i_2 -= 1
        while (i_2 != 0)
        
        result.b = 1
    else if (result != 3)
        result.b = 1
    else
        void var_2d4
        sub_6ddc90(&var_2d4)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        void* var_2f8
        int32_t var_310_4 = sub_5b9470(&var_2f8, (*(arg1 + 0x10) * *(arg1 + 0xc)) << 2)
        data_c6d164 = &var_2f8
        i_4 = nullptr
        i_6 = nullptr
        void* i_5
        
        if (sub_6ddd90(&var_2d4, arg3, *(arg1 + 0x18), *(arg1 + 0x1c), &var_2f8, &i_4, &i_6) != 0)
            sub_6ddf40(&var_2d4)
            i_5 = i_6
            
            if (i_5 s> 0)
                void* esi_6 = var_2f8
                void* eax_17 = i_4 << 2
                void* var_2dc_4 = eax_17
                void* i_3
                
                do
                    sub_748840(i_7, esi_6, eax_17, eax_2)
                    eax_17 = var_2dc_4
                    i_7 += arg3
                    esi_6 += eax_17
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
            
            i_5.b = 1
        else
            i_5.b = 0
        
        sub_538150(&var_2f8)
        sub_6ddd00(&var_2d4)
        result.b = i_5.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
