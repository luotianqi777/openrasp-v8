typedef struct flex_token_result {
    int * result;
    int result_len;
} flex_token_result;

flex_token_result flex_lexing(const char *input, int len, const char *tokenizer_type);

#define YY_FATAL_ERROR(msg) yy_fatal_error_throw( msg )
void yy_fatal_error_throw (const char* msg);
