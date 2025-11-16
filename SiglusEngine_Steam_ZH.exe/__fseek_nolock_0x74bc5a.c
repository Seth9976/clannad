// 函数: __fseek_nolock
// 地址: 0x74bc5a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]

if ((eax.b & 0x83) == 0)
    *__errno() = 0x16
    return 0xffffffff

enum SET_FILE_POINTER_MOVE_METHOD ebx_1 = arg3
arg1[3] = eax & 0xffffffef
int32_t edi
int32_t var_10_1 = edi
void* edi_2

if (ebx_1 != FILE_CURRENT)
    edi_2 = arg2
else
    edi_2 = arg2 + sub_74b8ca(edi, arg1)
    ebx_1 = FILE_BEGIN

__flush(arg1)
int32_t eax_5 = arg1[3]

if (eax_5.b s< 0)
    arg1[3] = eax_5 & 0xfffffffc
else if ((eax_5.b & 1) != 0 && (eax_5.b & 8) != 0 && (eax_5 & 0x400) == 0)
    arg1[6] = 0x200

int32_t ecx_4
ecx_4.b = sub_75b7a5(__fileno(arg1), edi_2, ebx_1) != 0xffffffff
return ecx_4 - 1
