// 函数: sub_683a70
// 地址: 0x683a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = data_bac4d0
int32_t esi = 0
int32_t result = edi[1] - *edi

if ((result & 0xfffffffc) s> 0)
    do
        int32_t* ebx_1 = *(*edi + (esi << 2))
        
        if (sub_681c80(ebx_1) != 0)
            (*(*ebx_1 + 0x10))(data_4ebe3ac)
        
        esi += 1
        result = (edi[1] - *edi) s>> 2
    while (esi s< result)

return result
