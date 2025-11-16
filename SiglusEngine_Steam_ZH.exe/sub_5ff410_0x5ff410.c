// 函数: sub_5ff410
// 地址: 0x5ff410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_1c = ebx
bool cond:0 = *(ebx + 0xb4) u< 8
void** eax_3 = ebx + 0xa0
eax_3[4] = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = nullptr
*(ebx + 0xb8) = 0xff
*(ebx + 0xbc) = 0
*(ebx + 0xc0) = 0
*(ebx + 0xc4) = 0
int32_t i_3 = 0
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2f149903, *(ebx + 0xcc) - *(ebx + 0xc8))
int32_t edx_1 = edx s>> 6

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edi_1 = 0
    int32_t var_18_1 = 0
    int32_t edx_4
    int32_t i
    
    do
        int32_t* esi_1 = *(ebx + 0xc8)
        HANDLE ebx_1 = *(esi_1 + edi_1)
        void* esi_2 = esi_1 + edi_1
        HANDLE var_20_1 = ebx_1
        
        if (ebx_1 != 0)
            WaitForSingleObject(ebx_1, 0xffffffff)
        
        int32_t var_8_1 = 0
        sub_6de780(esi_2)
        *(esi_2 + 0x120) = 0
        int32_t* edi_2 = *(esi_2 + 0x124)
        *(esi_2 + 0x124) = 0
        
        if (edi_2 != 0)
            bool cond:1_1 = edi_2[1] != 1
            edi_2[1]
            edi_2[1] -= 1
            
            if (not(cond:1_1))
                (*(*edi_2 + 4))(eax_2)
                bool cond:3_1 = edi_2[2] != 1
                edi_2[2]
                edi_2[2] -= 1
                
                if (not(cond:3_1))
                    (*(*edi_2 + 8))()
        
        int32_t var_8_2 = 0xffffffff
        
        if (ebx_1 != 0)
            ReleaseSemaphore(ebx_1, 1, nullptr)
        
        void* eax_12 = esi_2 + 0x134
        *(esi_2 + 0x128) = 0xffffffff
        *(esi_2 + 0x12c) = 0xffffffff
        *(esi_2 + 0x130) = 0xffffffff
        bool cond:2_1 = *(eax_12 + 0x14) u< 8
        *(eax_12 + 0x10) = 0
        
        if (not(cond:2_1))
            eax_12 = *eax_12
        
        ebx = var_1c
        *eax_12 = 0
        edi_1 = var_18_1 + 0x15c
        *(esi_2 + 0x14c) = 0xffffffff
        *(esi_2 + 0x154) = *(esi_2 + 0x150)
        int32_t eax_14
        int32_t edx_3
        edx_3:eax_14 = muls.dp.d(0x2f149903, *(ebx + 0xcc) - *(ebx + 0xc8))
        i = i_3 + 1
        var_18_1 = edi_1
        edx_4 = edx_3 s>> 6
        i_3 = i
    while (i s< (edx_4 u>> 0x1f) + edx_4)

int32_t eax_18
int32_t edx_5
edx_5:eax_18 = muls.dp.d(0x2f149903, *(ebx + 0xcc) - *(ebx + 0xc8))
int32_t i_2 = 0
int32_t edx_6 = edx_5 s>> 6
int32_t result = (edx_6 u>> 0x1f) + edx_6

if (result s> 0)
    result = 0
    int32_t result_1 = 0
    int32_t edx_8
    int32_t i_1
    
    do
        int32_t esi_4 = *(ebx + 0xb8)
        int32_t* edi_5 = *(ebx + 0xc8) + result
        
        if (esi_4 s< 0)
            esi_4 = 0
        else if (esi_4 s> 0xff)
            esi_4 = 0xff
        
        HANDLE ebx_2 = *edi_5
        HANDLE var_20_2 = ebx_2
        
        if (ebx_2 != 0)
            WaitForSingleObject(ebx_2, 0xffffffff)
        
        int32_t var_8_3 = 1
        
        if (esi_4 s< 0)
            esi_4 = 0
        else if (esi_4 s> 0xff)
            esi_4 = 0xff
        
        edi_5[0x1f].b = 0
        
        if (esi_4 s< 0)
            esi_4 = 0
        else if (esi_4 s> 0xff)
            esi_4 = 0xff
        
        edi_5[0x1e] = esi_4
        sub_6df670(edi_5)
        int32_t var_8_4 = 0xffffffff
        
        if (ebx_2 != 0)
            ReleaseSemaphore(ebx_2, 1, nullptr)
        
        ebx = var_1c
        result_1 += 0x15c
        i_1 = i_2 + 1
        i_2 = i_1
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = muls.dp.d(0x2f149903, *(ebx + 0xcc) - *(ebx + 0xc8))
        edx_8 = edx_7 s>> 6
        result = result_1
    while (i_1 s< (edx_8 u>> 0x1f) + edx_8)

fsbase->NtTib.ExceptionList = ExceptionList
return result
