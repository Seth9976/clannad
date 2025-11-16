// 函数: sub_6d5280
// 地址: 0x6d5280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx = arg2 + 0xc
int32_t edi = *(arg2 + 8)
int32_t esi = 0x400
void** result = *(arg1 + 0xbc)

while (true)
    if (esi u> edi)
        esi = edi
    
    if (ecx != 0 && esi != 0)
        int32_t eax = *(arg1 + 0x58)
        
        if (eax == 0)
            sub_6d42e0(arg1, "Call to NULL write function")
            noreturn
        
        sub_6caa70(eax(arg1, ecx, esi), ecx, arg1, esi)
    
    int32_t temp0_1 = edi
    edi -= esi
    
    if (temp0_1 == esi)
        break
    
    if (result == 0)
        break
    
    esi = *(arg1 + 0xc0)
    ecx = &result[1]
    result = *result

if (edi == 0)
    return result

sub_6d42e0(arg1, "error writing ancillary chunked compressed data")
noreturn
