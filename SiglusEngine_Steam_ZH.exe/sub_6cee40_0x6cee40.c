// 函数: sub_6cee40
// 地址: 0x6cee40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg2 & 0xb

if (edx == 0)
    if ((*(arg1 + 0x74) & 0x8000) != 0)
    label_6cee89:
        sub_6d42e0(arg1, "invalid location in png_set_unknown_chunks")
        noreturn
    
    if ((*(arg1 + 0x78) & 0x200000) == 0)
        sub_6d42e0(arg1, "png_set_unknown_chunks now expects a valid location")
        noreturn
    
    sub_6d4470(arg1, "png_set_unknown_chunks now expects a valid location")
    edx = zx.d(*(arg1 + 0x74)) & 0xb
    
    if (edx == 0)
        goto label_6cee89

int32_t i

for (i = neg.d(edx) & edx; edx != i; i = neg.d(edx) & edx)
    edx &= not.d(i)

i.b = edx.b
return i
