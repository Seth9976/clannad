// 函数: __FindAndUnlinkFrame
// 地址: 0x749338
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t* result

if (arg1 != __getptd()[0x26])
    void* ecx_1 = __getptd()[0x26]
    
    while (true)
        if (*(ecx_1 + 4) == 0)
            noreturn _inconsistency() __tailcall
        
        void* eax_2 = *(ecx_1 + 4)
        
        if (arg1 == eax_2)
            break
        
        ecx_1 = eax_2
    
    result = *(arg1 + 4)
    *(ecx_1 + 4) = result
else
    result = __getptd()
    result[0x26] = *(arg1 + 4)

return result
