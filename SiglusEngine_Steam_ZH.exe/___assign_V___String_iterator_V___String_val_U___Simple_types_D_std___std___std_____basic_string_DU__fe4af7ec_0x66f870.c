// 函数: ??$assign@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0@Z
// 地址: 0x66f870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx

if (arg1[5] u< 0x10)
    edx = arg1
else
    edx = *arg1

char* eax_1 = arg1[4] + edx
int32_t* edx_1

if (arg1[5] u< 0x10)
    edx_1 = arg1
else
    edx_1 = *arg1

if (eax_1 != 0)
    return sub_66f7b0(arg1, eax_1 - edx_1, 1, arg2)

return sub_66f7b0(arg1, eax_1, 1, arg2)
