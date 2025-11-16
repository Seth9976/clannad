// 函数: sub_5c77c0
// 地址: 0x5c77c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg4

if (ebx == 0)
    return 0x80004003

*ebx = 0
int32_t* ecx = *(arg1 + 0x34)

if (ecx != 0)
    arg4 = nullptr
    BSTR bstrString
    
    if (arg3 != 0)
        bstrString = SysAllocString(arg3)
        
        if (bstrString == 0)
            sub_5c4990(0x8007000e)
            noreturn
    else
        bstrString = nullptr
    
    int32_t result = (*(*ecx + 0x50))(ecx, arg2, bstrString, &arg4)
    SysFreeString(bstrString)
    
    if (result s>= 0 && SysStringLen(arg4) != 0)
        void* cb = (SysStringLen(arg4) << 1) + 2
        char* eax_7 = CoTaskMemAlloc(cb)
        *ebx = eax_7
        
        if (eax_7 == 0)
            SysFreeString(arg4)
            return 0x8007000e
        
        sub_5c49b0(_memcpy_s(eax_7, cb, arg4, cb))
        SysFreeString(arg4)
        return result
    
    SysFreeString(arg4)

return 1
