// 函数: sub_602b70
// 地址: 0x602b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdb00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_18 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result = arg2

if (result s< arg3)
    void* ecx = result * 0x250
    arg3 -= result
    arg2 = ecx
    void* i
    
    do
        void* esi_2 = *(ebx + 0xa4) + ecx
        bool cond:6_1 = *(esi_2 + 0xb4) u< 8
        void** eax_3 = esi_2 + 0xa0
        eax_3[4] = 0
        
        if (not(cond:6_1))
            eax_3 = *eax_3
        
        *eax_3 = nullptr
        void** eax_4 = esi_2 + 0xb8
        bool cond:0_1 = eax_4[5] u< 8
        eax_4[4] = 0
        
        if (not(cond:0_1))
            eax_4 = *eax_4
        
        *eax_4 = nullptr
        *(esi_2 + 0xd0) = 0xffffffff
        *(esi_2 + 0xd4) = 0xffffffff
        *(esi_2 + 0xd8) = 2
        *(esi_2 + 0xdc) = 0xffffffff
        *(esi_2 + 0xe0) = 0xff
        *(esi_2 + 0xe4) = 0
        *(esi_2 + 0xe8) = 0
        *(esi_2 + 0xec) = 0
        *(esi_2 + 0xf0) = 0
        HANDLE ebx_1 = *(esi_2 + 0xf4)
        HANDLE var_1c_1 = ebx_1
        
        if (ebx_1 != 0)
            WaitForSingleObject(ebx_1, 0xffffffff)
        
        int32_t var_8_1 = 0
        sub_6de780(esi_2 + 0xf4)
        *(esi_2 + 0x214) = 0
        int32_t* edx_2 = *(esi_2 + 0x218)
        *(esi_2 + 0x218) = 0
        
        if (edx_2 != 0)
            bool cond:1_1 = edx_2[1] != 1
            edx_2[1]
            edx_2[1] -= 1
            
            if (not(cond:1_1))
                (*(*edx_2 + 4))(eax_2)
                bool cond:3_1 = edx_2[2] != 1
                edx_2[2]
                edx_2[2] -= 1
                
                if (not(cond:3_1))
                    (*(*edx_2 + 8))()
        
        if (ebx_1 != 0)
            ReleaseSemaphore(ebx_1, 1, nullptr)
        
        void* eax_9 = esi_2 + 0x228
        *(esi_2 + 0x21c) = 0xffffffff
        *(esi_2 + 0x220) = 0xffffffff
        *(esi_2 + 0x224) = 0xffffffff
        bool cond:2_1 = *(eax_9 + 0x14) u< 8
        *(eax_9 + 0x10) = 0
        
        if (not(cond:2_1))
            eax_9 = *eax_9
        
        *eax_9 = 0
        *(esi_2 + 0x240) = 0xffffffff
        *(esi_2 + 0x248) = *(esi_2 + 0x244)
        int32_t esi_3 = *(esi_2 + 0xe0)
        
        if (esi_3 s< 0)
            esi_3 = 0
        else if (esi_3 s> 0xff)
            esi_3 = 0xff
        
        HANDLE ebx_2 = *(esi_2 + 0xf4)
        HANDLE var_1c_2 = ebx_2
        
        if (ebx_2 != 0)
            WaitForSingleObject(ebx_2, 0xffffffff)
        
        int32_t var_8_2 = 1
        
        if (esi_3 s< 0)
            esi_3 = 0
        else if (esi_3 s> 0xff)
            esi_3 = 0xff
        
        *(esi_2 + 0x170) = 0
        
        if (esi_3 s< 0)
            esi_3 = 0
        else if (esi_3 s> 0xff)
            esi_3 = 0xff
        
        *(esi_2 + 0x16c) = esi_3
        result = sub_6df670(esi_2 + 0xf4)
        int32_t var_8_3 = 0xffffffff
        
        if (ebx_2 != 0)
            result = ReleaseSemaphore(ebx_2, 1, nullptr)
        
        ebx = var_18
        ecx = &arg2[0x94]
        i = arg3
        arg3 -= 1
        arg2 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
