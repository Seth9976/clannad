// 函数: sub_443896
// 地址: 0x443896
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x20)
int32_t edi
int32_t var_c = edi
int32_t result =
    sbb.d(eax + arg2 + 4, eax + arg2 + 4, *(arg1 + 0x1c) + eax u< eax + arg2 + 4) & 0x80004005

if (result s>= 0)
    void* esi_2 = arg2 + *(arg1 + 0x20)
    
    if (*esi_2 u< 2)
        return 0x80004005
    
    result = sub_44383a(arg1, arg2)
    
    if (result s>= 0)
        void* ecx = esi_2 + 4
        
        while (true)
            char edx_1 = *ecx
            
            if (edx_1 == 0)
                return result
            
            uint32_t edx_2 = zx.d(edx_1)
            
            if (edx_2 == 0x2e)
                return 0x80004005
            
            if (edx_2 == 0x40)
                return 0x80004005
            
            if (edx_2 == 0x5b)
                return 0x80004005
            
            if (edx_2 == 0x5d)
                return 0x80004005
            
            ecx += 1

return result
