// 函数: __wincmdln
// 地址: 0x5f831a
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0

if (data_20f4594 == 0)
    ___initmbctable()

void* const result = data_20f459c

if (result == 0)
    result = &data_6138e3

while (true)
    char ecx = *result
    
    if (ecx u<= 0x20)
        if (ecx == 0)
            return result
        
        if (edi == 0)
            while (true)
                int32_t eax
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b u> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (ecx == 0x22)
        int32_t eax_1
        eax_1.b = edi == 0
        edi = eax_1
    
    if (__ismbblead(ecx) != 0)
        result += 1
    
    result += 1
