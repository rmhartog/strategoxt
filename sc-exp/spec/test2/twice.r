module twice
imports lib memo
signature
  constructors
    A : Term
    B : Term

rules

    RuleA      : A -> B

strategies

    main       = debug(!"main: "); <Main> [A, A]; debug(!"main x: ")

    Main       = debug(!"Main: "); memo-scope([ma, ma]); debug(!"Main x: ")

    ma 	       = debug(!"ma: "); memo(RuleA); debug(!"ma x: ")
