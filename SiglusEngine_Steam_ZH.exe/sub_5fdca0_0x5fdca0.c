// 函数: sub_5fdca0
// 地址: 0x5fdca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_1c = ebx
*(ebx + 0x4a0) = 0
int32_t* esi = *(ebx + 0x4a4)
*(ebx + 0x4a4) = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

*(ebx + 0x4a8) = 0
int32_t* esi_1 = *(ebx + 0x4ac)
*(ebx + 0x4ac) = 0

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))(eax_2)
        bool cond:4_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:4_1))
            (*(*esi_1 + 8))()

*(ebx + 0x4b0) = 0
int32_t* esi_2 = *(ebx + 0x4b4)
*(ebx + 0x4b4) = 0

if (esi_2 != 0)
    bool cond:3_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*esi_2 + 4))(eax_2)
        bool cond:5_1 = esi_2[2] != 1
        esi_2[2]
        esi_2[2] -= 1
        
        if (not(cond:5_1))
            (*(*esi_2 + 8))()

sub_5cacb0(ebx + 0x3bc)
sub_6011e0(ebx + 0x304)
int32_t i_2 = (*(ebx + 0x2f4) - *(ebx + 0x2f0)) s/ 0x250
int32_t i_1 = i_2

if (i_2 s> 0)
    int32_t ecx_11 = 0
    int32_t var_20_1 = 0
    int32_t var_14_1 = 0
    int32_t i
    
    do
        int32_t* esi_5 = *(ebx + 0x2f0) + 0xf4 + ecx_11
        int32_t* var_38_1 = esi_5
        sub_6dfad0()
        HANDLE edi_1 = *esi_5
        HANDLE var_24_1 = edi_1
        
        if (edi_1 != 0)
            WaitForSingleObject(edi_1, 0xffffffff)
        
        int32_t var_8_1 = 1
        sub_6de780(esi_5)
        esi_5[0x48] = 0
        int32_t* ebx_1 = esi_5[0x49]
        esi_5[0x49] = 0
        
        if (ebx_1 != 0)
            bool cond:6_1 = ebx_1[1] != 1
            ebx_1[1]
            ebx_1[1] -= 1
            
            if (not(cond:6_1))
                (*(*ebx_1 + 4))(eax_2)
                bool cond:7_1 = ebx_1[2] != 1
                ebx_1[2]
                ebx_1[2] -= 1
                
                if (not(cond:7_1))
                    (*(*ebx_1 + 8))()
        
        int32_t var_8_2 = 0xffffffff
        
        if (edi_1 != 0)
            ReleaseSemaphore(edi_1, 1, nullptr)
        
        HANDLE hObject = *esi_5
        
        if (hObject != 0)
            CloseHandle(hObject)
            *esi_5 = 0
        
        ebx = var_1c
        ecx_11 = var_14_1 + 0x250
        i = i_1
        i_1 -= 1
        var_14_1 = ecx_11
    while (i != 1)

sub_6011e0(ebx + 0x194)
sub_600840(ebx + 0xd8)
int32_t* result = sub_5ff280(ebx)
fsbase->NtTib.ExceptionList = ExceptionList
return result
