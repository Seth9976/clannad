// 函数: sub_42f170
// 地址: 0x42f170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg2
int32_t i_1 = 0
bool cond:0 = *(arg1 + 0x54) s<= 0
void* esi = *(arg1 + 0x50)
*(arg1 + 0x2c) = arg2
*(arg1 + 0x34) = 1
*(arg1 + 0x30) = 0

if (cond:0)
    return 

int32_t i

do
    bool cond:1_1 = arg2 s> *(esi + 0x18)
    int32_t edi_1 = arg2
    *(esi + 0x20) = 0
    
    if (cond:1_1)
        edi_1 = *(esi + 0x18)
    
    *(esi + 0x14c) += 1
    *(esi + 0x24) = 1
    *(esi + 0x28) = 1
    *(esi + 0x2c) = 0
    *(esi + 0x34) = 0
    sub_42f010(esi)
    *(esi + 8) = edi_1
    *(esi + 0xc) = 0xffffffff
    sub_42ef50(esi)
    esi += 0x178
    arg2 = var_c
    i = i_1 + 1
    i_1 = i
while (i s< *(arg1 + 0x54))
