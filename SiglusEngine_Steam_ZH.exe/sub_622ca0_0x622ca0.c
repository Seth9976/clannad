// 函数: sub_622ca0
// 地址: 0x622ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd32b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_17c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

while (true)
    result = *(arg1 + 0x4ab00)
    
    if (result != 1)
        if (result == 2 || result == 0x2e)
            sub_676760()
            break
        
        if (result == 3)
            result = sub_670f40()
        else if (result == 4)
            result = sub_670c90()
        else if (result == 5)
            result = sub_671000()
        else if (result == 6)
            result = sub_6710a0()
        else if (result == 0x30)
            result = sub_6710e0()
        else if (result == 7)
            result = sub_671130()
        else if (result == 0x2a)
            result = sub_671170()
        else if (result == 0x2f)
            result = sub_6711b0()
        else if (result == 0x31)
            result = sub_6711f0(arg1 + 0x4ab00)
        else if (result == 8)
            result = sub_671050()
        else if (result == 9)
            result = sub_671260()
        else if (result == 0x14)
            result = sub_6712a0()
        else if (result == 0x13)
            result = sub_671440()
        else if (result == 0x15)
            result = sub_671510()
        else if (result != 0x16)
            if (result != 0x17 && result != 0x18)
                if (result == 0x19)
                    if (sub_6717d0().b == 0)
                        break
                    
                    continue
                else if (result == 0x1a)
                    if (sub_671af0().b == 0)
                        break
                    
                    continue
                else if (result == 0x1b)
                    if (sub_672040().b == 0)
                        break
                    
                    continue
                else if (result == 0x1c)
                    if (sub_6721e0().b == 0)
                        break
                    
                    continue
                else if (result == 0x1d)
                    if (sub_672360().b == 0)
                        break
                    
                    continue
                else if (result == 0x1e)
                    if (sub_6724d0().b == 0)
                        break
                    
                    continue
                else if (result == 0x1f)
                    if (sub_672650().b == 0)
                        break
                    
                    continue
                else if (result == 0x20)
                    if (sub_6727d0().b == 0)
                        break
                    
                    continue
                else if (result == 0x21)
                    if (sub_672980().b == 0)
                        break
                    
                    continue
                else if (result == 0x22)
                    if (sub_672b00().b == 0)
                        break
                    
                    continue
                else if (result == 0x23)
                    if (sub_672cd0().b == 0)
                        break
                    
                    continue
                else if (result == 0x24)
                    if (sub_672e00().b == 0)
                        break
                    
                    continue
                else if (result == 0x25)
                    if (sub_672f30().b == 0)
                        break
                    
                    continue
                else if (result == 0x26)
                    if (sub_673090().b == 0)
                        break
                    
                    continue
                else if (result == 0x27)
                    if (sub_6731f0().b == 0)
                        break
                    
                    continue
                else if (result == 0x28)
                    if (sub_673320().b == 0)
                        break
                    
                    continue
                else if (result == 0x33)
                    sub_6734a0()
                    continue
                else if (result != 0x12)
                    if (result == 0xe)
                        break
                    
                    if (result == 0xf)
                        if (sub_673510().b == 0)
                            break
                        
                        continue
                    else if (result == 0x10)
                        if (sub_673590().b == 0)
                            break
                        
                        continue
                    else if (result == 0x29)
                        sub_6736f0()
                        continue
                    else if (result == 0x2b)
                        sub_673740()
                        continue
                    else if (result == 0x2c)
                        sub_673790()
                        continue
                    else if (result != 0x2d)
                        if (result != 0x32)
                            break
                        
                        sub_673ae0()
                        continue
                    else
                        if (sub_6737f0().b == 0)
                            break
                        
                        continue
                else
                    void var_16c
                    sub_54cf80(&var_16c, arg1 + 0x4ab00)
                    int32_t var_8_1 = 0
                    sub_676760()
                    int32_t var_40
                    int32_t edi_1 = var_40
                    int32_t var_3c
                    
                    if (edi_1 == var_3c)
                        edi_1 = 0
                    
                    void var_e0
                    void* ecx_3 = &var_e0
                    int32_t var_e8
                    
                    if (sub_54b1c0(var_e8, edi_1, sub_5c0760(&var_40), 0, 0) == 0)
                        sub_54ae40(ecx_3)
                        break
                    
                    int32_t var_8_2 = 0xffffffff
                    sub_54ae40(ecx_3)
                    continue
            
            result = sub_671740()
        else
            result = sub_6716b0()
        
        if (result.b == 0)
            break
        
        continue
    
    if (*(arg1 + 0x4a7a1) != 0 && *(arg1 + 0x4a7a2) == 0)
        *(arg1 + 0x4a750) = 0
        break
    
    sub_673b70()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
