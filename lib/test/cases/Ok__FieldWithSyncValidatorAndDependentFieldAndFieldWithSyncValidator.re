module Form = [%form
  type input = {
    name: [@field.deps age] string,
    age: int,
  };
  let validators = {
    name: {
      strategy: OnSubmit,
      validate: ({name, _}) => Ok(name),
    },
    age: {
      strategy: OnSubmit,
      validate: ({age, _}) => Ok(age),
    },
  }
];
