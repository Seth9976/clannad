// 函数: sub_6dfb80
// 地址: 0x6dfb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cca68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_30 = edi
int32_t var_34 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1

while (ebx[6].b == 0)
    WaitForSingleObject(ebx[5], 0xffffffff)
    
    for (int32_t* i = *ebx; i != ebx[1]; i = &i[1])
        int32_t* edi_1 = *i
        HANDLE ebx_1 = *edi_1
        HANDLE var_1c_1 = ebx_1
        
        if (ebx_1 != 0)
            WaitForSingleObject(ebx_1, 0xffffffff)
        
        int32_t var_c_1 = 0
        
        if (GetTickCount() - edi_1[8] u>= 0xc8)
            int32_t* ecx_1 = edi_1[1]
            
            if (ecx_1 != 0 && edi_1[2] != 0)
                int32_t var_20
                (*(*ecx_1 + 0x10))(ecx_1, &var_20, 0)
                int32_t ecx_2 = edi_1[5]
                uint32_t temp0_1 = divu.dp.d(0:(var_20 * 0x64), edi_1[2])
                
                if (ecx_2 == 0)
                    sub_6de9d0(edi_1, 0)
                else if (ecx_2 != 1)
                    if (ecx_2 == 2 && temp0_1 - 0x32 u<= 0x31)
                        sub_6de9d0(edi_1, 0)
                else if (temp0_1 u< 0x32)
                    sub_6de9d0(edi_1, ecx_2)
            
            sub_6df510(edi_1)
        
        sub_6df670(edi_1)
        int32_t var_c_2 = 0xffffffff
        
        if (ebx_1 != 0)
            ReleaseSemaphore(ebx_1, 1, nullptr)
        
        ebx = arg1
    
    ReleaseSemaphore(ebx[5], 1, nullptr)
    Sleep(0x14)

ebx[6].b = 0
ExitThread(1)
noreturn
