// 函数: sub_6e8ea0
// 地址: 0x6e8ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int128_t xmm0 = *(arg1 + 0x12c)
*(arg1 + 0x114) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0xd358) = xmm0
*(arg1 + 0x11c) = 0
*(arg1 + 0xd368) = *(arg1 + 0x13c)
*(arg1 + 0xd378) = *(arg1 + 0x14c)
int32_t esi = *(arg1 + 0x30)
int32_t edi_1 = *(arg1 + 8) + 0x20
int32_t ebx_1 = *(arg1 + 4) + 0x20
return _memset(*(arg1 + 0x24c), 0x80, 
    edi_1 * ebx_1
        + (((edi_1 s>> ((not.d(esi u>> 1)).b & 1)) * (ebx_1 s>> ((not.d(esi)).b & 1))) << 1))
