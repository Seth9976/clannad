// 函数: sub_4cb840
// 地址: 0x4cb840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum WAIT_EVENT edi = arg2
enum WAIT_EVENT eax
int32_t ecx
eax, ecx = WaitForSingleObject(data_702788, 0xffffffff)

if (edi == WAIT_FAILED)
    eax = sub_4cb7d0(ecx | edi)
    edi = eax

if (edi u<= 0x3f)
    if (*(edi * 0x3c0 + &data_20af850) == 3)
        int32_t* eax_1 = *(edi * 0x3c0 + 0x20af860)
        eax = (*(*eax_1 + 0x24))(eax_1)
    
    *(edi * 0x3c0 + 0x20af89c) = 0xff
    
    if (*(edi * 0x3c0 + 0x20af9f4) == 0)
        *(edi * 0x3c0 + &data_20af850) = 1
    else
        eax = sub_4caf70(edi * 0x3c0 + &data_20af850)
    
    if (sub_4cb1e0(eax, arg3, edi * 0x3c0 + &data_20af850, arg7) == 1)
        *(edi * 0x3c0 + 0x20af9c0) = arg4
        int64_t xmm0_1
        
        if (not(arg10 <= 0.0))
            xmm0_1 = *(edi * 0x3c0 + 0x20af9e8)
        
        if (arg10 <= 0.0 || xmm0_1 f< arg10)
            xmm0_1 = *(edi * 0x3c0 + 0x20af9e8)
            *(edi * 0x3c0 + 0x20af9d8) = xmm0_1
        else
            *(edi * 0x3c0 + 0x20af9d8) = arg10
        
        if (arg8 f<= 0 || xmm0_1 f< arg8)
            *(edi * 0x3c0 + 0x20af9c8) = (zx.o(0)).q
        else
            *(edi * 0x3c0 + 0x20af9c8) = arg8
        
        if (arg9 f<= 0 || xmm0_1 f< arg9)
            *(edi * 0x3c0 + 0x20af9d0) = *(edi * 0x3c0 + 0x20af9c8)
        else
            *(edi * 0x3c0 + 0x20af9d0) = arg9
        
        int32_t eax_4 = arg6
        *(edi * 0x3c0 + 0x20af880) = 0
        
        if (eax_4 s>= 0)
            if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            *(edi * 0x3c0 + 0x20af89c) = eax_4
        
        sub_4cbc80(edi)
        sub_4cb2f0(edi * 0x3c0 + &data_20af850)
        int32_t eax_5 = *(edi * 0x3c0 + 0x20af89c)
        data_1c04204 = 1
        
        if (eax_5 != 0xff)
            sub_4cbdc0(eax_5, 5, edi, eax_5, 0xff, arg5)

return ReleaseSemaphore(data_702788, 1, nullptr)
